node
{
        stage( 'Checkout scm'){
                checkout([$class: 'GitSCM', branches: [[name: '*/master']], doGenerateSubmoduleConfigurations: false, extensions: [], submoduleCfg: [], userRemoteConfigs: [[credentialsId: 'a6f94318-d764-4833-8e14-0bf0575ec727', url: 'https://github.com/pknviki95/Reshi.git']]])
        }
        stage ('Static code Analysis' ){
                        def scannerHome = tool 'sonarqube-8.2';
                        withSonarQubeEnv(credentialsId: 'sonarqube') {
                            sh """${scannerHome}/bin/sonar-scanner -Dsonar.login=admin -Dsonar.password=admin -Dsonar.projectKey=reshi"""
                }
   
        }
}
