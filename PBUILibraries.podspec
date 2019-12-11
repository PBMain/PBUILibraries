Pod::Spec.new do |s|
  s.name             = 'PBUILibraries'
  s.version          = '1.5.0.1'
  s.summary          = 'UI Libraries for Photo Butler'

  s.description      = <<-DESC
UI Libraries for Photo Butler. 3rd party includes, frameworks, and libraries.
                       DESC

  s.homepage         = 'https://github.com/PBMain'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'philbelley' => 'pbelley@photobutler.com' }
  s.source           = { :git => 'https://github.com/PBMain/PBUILibraries.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.3'

  #s.source_files = 'PBUILibraries/Classes/**/*'
  
  s.ios.vendored_frameworks = 'PBFrameworkUILibraries.framework'
  
end
