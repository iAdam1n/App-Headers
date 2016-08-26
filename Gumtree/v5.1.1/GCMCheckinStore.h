/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GCMCheckinCache.h>

@class NSString, GCMAuthKeychain;

@interface GCMCheckinStore : NSObject <GCMCheckinCache> {

	NSString* _fileName;
	GCMAuthKeychain* _keychain;

}

@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) GCMAuthKeychain * keychain;              //@synthesize keychain=_keychain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pathForCheckinPlist:(id)arg1 ;
-(GCMAuthKeychain *)keychain;
-(BOOL)hasCheckinPlist;
-(id)cachedCheckinPreferences;
-(void)setKeychain:(GCMAuthKeychain *)arg1 ;
-(BOOL)removeCheckinPreferences:(id*)arg1 ;
-(id)initWithFileName:(id)arg1 keychain:(id)arg2 ;
-(id)pathForCheckinPlist;
-(id)init;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end
