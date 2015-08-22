/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@class MNAdaptiveImageDownloaderStreamingConfiguration, MNAdaptiveImageDownloaderNonStreamingConfiguration;

@interface MNAdaptiveImageDownloaderConfiguration : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNAdaptiveImageDownloaderStreamingConfiguration* _streamingConfiguration_streamingConfiguration;
	MNAdaptiveImageDownloaderNonStreamingConfiguration* _nonStreamingConfiguration_nonStreamingConfiguration;

}
+(id)streamingConfigurationWithStreamingConfiguration:(id)arg1 ;
+(id)nonStreamingConfigurationWithNonStreamingConfiguration:(id)arg1 ;
-(void)matchStreamingConfiguration:(/*^block*/id)arg1 nonStreamingConfiguration:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
