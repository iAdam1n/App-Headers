/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface FBVideoExportConfig : FBValueObject <NSCopying> {

	BOOL _performStandardization;
	unsigned _maxAvgVideoBitrateSD;
	unsigned _maxAvgVideoBitrateHD;
	unsigned _preferredResolution;
	float _preferredBitrateQualityFactorSD;
	NSDictionary* _videoCompressionSettings;
	NSDictionary* _audioCompressionSettings;

}

@property (nonatomic,readonly) BOOL performStandardization;                               //@synthesize performStandardization=_performStandardization - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * videoCompressionSettings;              //@synthesize videoCompressionSettings=_videoCompressionSettings - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * audioCompressionSettings;              //@synthesize audioCompressionSettings=_audioCompressionSettings - In the implementation block
@property (nonatomic,readonly) unsigned maxAvgVideoBitrateSD;                             //@synthesize maxAvgVideoBitrateSD=_maxAvgVideoBitrateSD - In the implementation block
@property (nonatomic,readonly) unsigned maxAvgVideoBitrateHD;                             //@synthesize maxAvgVideoBitrateHD=_maxAvgVideoBitrateHD - In the implementation block
@property (nonatomic,readonly) unsigned preferredResolution;                              //@synthesize preferredResolution=_preferredResolution - In the implementation block
@property (nonatomic,readonly) float preferredBitrateQualityFactorSD;                     //@synthesize preferredBitrateQualityFactorSD=_preferredBitrateQualityFactorSD - In the implementation block
-(NSDictionary *)videoCompressionSettings;
-(NSDictionary *)audioCompressionSettings;
-(BOOL)performStandardization;
-(unsigned)maxAvgVideoBitrateSD;
-(unsigned)maxAvgVideoBitrateHD;
-(float)preferredBitrateQualityFactorSD;
-(id)initWithPerformStandardization:(BOOL)arg1 videoCompressionSettings:(id)arg2 audioCompressionSettings:(id)arg3 maxAvgVideoBitrateSD:(unsigned)arg4 maxAvgVideoBitrateHD:(unsigned)arg5 preferredResolution:(unsigned)arg6 preferredBitrateQualityFactorSD:(float)arg7 ;
-(unsigned)preferredResolution;
@end
