/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSUserDefaults;

@interface IGSharedStorage : NSObject {

	NSUserDefaults* _sharedDefaults;

}

@property (nonatomic,retain) NSUserDefaults * sharedDefaults;              //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
+(id)sharedInstance;
-(id)breakpadStorageURL;
-(id)layoutStorageURL;
-(void)setSharingEnabled;
-(id)storageURLForDirectory:(id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(id)groupIdentifier;
-(id)init;
-(NSUserDefaults *)sharedDefaults;
-(BOOL)isSharingEnabled;
@end
