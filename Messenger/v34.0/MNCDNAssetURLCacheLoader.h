/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNCDNAssetURLCacheLoading.h>

@class MNCDNAssetURLCache, NSString;

@interface MNCDNAssetURLCacheLoader : NSObject <MNCDNAssetURLCacheLoading> {

	MNCDNAssetURLCache* _urlCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveCDNAssetURLsFromNetwork:(id)arg1 ;
-(id)initWithUrlCache:(id)arg1 ;
@end

