Pod::Spec.new do |s|
  s.name             	= "BSMacros"
  s.version          	= "1.0.0"
  s.summary          	= "Useful macros"
  s.description      	= "Useful macros for iOS development"
  s.homepage         	= "https://github.com/Bogdan-Stasjuk/BSMacros"
  s.license      		= { :type => 'MIT', :file => 'LICENSE' }
  s.author           	= { "Bogdan Stasiuk" => "Bogdan.Stasjuk@gmail.com" }
  s.source           	= { :git => "https://github.com/Bogdan-Stasjuk/BSMacros.git", :tag => '1.0.0' }
  s.social_media_url 	= 'https://twitter.com/Bogdan_Stasjuk'
  s.platform     		= :ios, '7.0'
  s.requires_arc 	= true
  s.source_files 	= 'BSMacros/*.{h,m}'
  s.public_header_files   	= 'BSMacros/*.h'
end
