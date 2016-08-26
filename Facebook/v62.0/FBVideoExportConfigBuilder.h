/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface FBVideoExportConfigBuilder : NSObject {

	BOOL _performStandardization;
	NSDictionary* _videoCompressionSettings;
	NSDictionary* _audioCompressionSettings;
	unsigned _maxAvgVideoBitrateSD;
	unsigned _maxAvgVideoBitrateHD;
	unsigned _preferredResolution;
	float _preferredBitrateQualityFactorSD;

}
+(id)videoExportConfig;
+(id)videoExportConfigFromExistingVideoExportConfig:(id)arg1 ;
-(id)withPreferredResolution:(unsigned)arg1 ;
-(id)withMaxAvgVideoBitrateHD:(unsigned)arg1 ;
-(id)withMaxAvgVideoBitrateSD:(unsigned)arg1 ;
-(id)withPerformStandardization:(BOOL)arg1 ;
-(id)withVideoCompressionSettings:(id)arg1 ;
-(id)withAudioCompressionSettings:(id)arg1 ;
-(id)withPreferredBitrateQualityFactorSD:(float)arg1 ;
-(id)build;
@end
