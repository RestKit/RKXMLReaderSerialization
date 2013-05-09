Pod::Spec.new do |s|
  s.name         = "RKXMLReaderSerialization"
  s.version      = "0.20.0"
  s.summary      = "A RestKit serialization format implementation for XML using XMLReader."
  s.homepage     = "https://github.com/RestKit/RKXMLReaderSerialization"
  s.license      = { :type => 'Apache', :file => 'LICENSE'}
  s.author       = { "Blake Watters" => "blakewatters@gmail.com" }

  s.requires_arc = true
  s.ios.deployment_target = '5.0'
  s.osx.deployment_target = '10.7'

  s.source       = { :git => "https://github.com/RestKit/RKXMLReaderSerialization.git" }
  s.source_files = '*.{h,m}'

  s.dependency 'RestKit', '>= 0.20.0dev'
  s.dependency 'TBXML-NSDictionary', '>= 0.0.1'
end
