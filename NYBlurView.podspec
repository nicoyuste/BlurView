#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
	s.name             = 'NYBlurView'
	s.module_name      = 'NYBlurView'
	s.version          = '1.2.0'
	s.summary          = 'Create easy Blur effects.'
	s.homepage         = 'https://github.com/nicoyuste/BlurView'
	s.description	   = 'Use this NYBlurView to create blur effects in any UIView.'

	s.license          = 'MIT'
	s.author           = { 'Nicolas Yuste' => 'info@nicoyuste.es' }
	s.source           = { :git => 'https://github.com/nicoyuste/BlurView.git', :tag => s.version.to_s }


	s.platform     = :ios, '7.0'
	s.requires_arc = true

	s.public_header_files = 'Pod/*.h'
	s.source_files = 'Pod/*'
	s.dependency 'SDVersion'

end