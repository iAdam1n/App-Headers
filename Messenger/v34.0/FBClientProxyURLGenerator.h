/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBClientProxyURLGenerator : NSObject {

	unsigned long long _port;
	BOOL _supportsResourceURLs;

}
+(NSRange)requestedRangeFromProxyURLIfExists:(id)arg1 ;
+(id)extractEverstoreBlobIDFromURL:(id)arg1 ;
+(id)buildDataKeyWithVideoID:(id)arg1 definition:(long long)arg2 everstoreBlobID:(id)arg3 videoUrl:(id)arg4 ;
+(id)remoteURLFromProxyURL:(id)arg1 ;
+(long long)definitionFromProxyURL:(id)arg1 ;
+(id)dataKeyForProxyURL:(id)arg1 ;
+(id)videoIDFromProxyURL:(id)arg1 ;
+(id)everstoreBlobIDFromProxyURL:(id)arg1 ;
+(long long)videoTypeFromProxyURL:(id)arg1 ;
+(id)trackerIDFromProxyURL:(id)arg1 ;
+(id)buildKeyForNoBlobIDWithURL:(id)arg1 ;
-(id)initWithSupportsResourceURLs:(BOOL)arg1 ;
-(id)proxyURLForURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(long long)arg4 videoType:(long long)arg5 ;
-(void)updatePort:(unsigned long long)arg1 ;
-(id)proxyURLForURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(long long)arg4 videoType:(long long)arg5 everstoreBlobId:(id)arg6 range:(id)arg7 ;
-(BOOL)fileTypeSupportsResourceURLs:(id)arg1 ;
-(id)init;
@end

