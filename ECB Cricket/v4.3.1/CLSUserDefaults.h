/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSMutableDictionary, NSURL;

@interface CLSUserDefaults : NSObject {

	dispatch_queue_sRef _access_queue;
	dispatch_queue_sRef _io_queue;
	NSMutableDictionary* _dataDictionary;
	NSURL* _directoryURL;
	NSURL* _fileURL;

}
+(id)standardUserDefaults;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)loadDictionaryFromDisk;
-(void)migrateFromNSUserDefaults:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)synchronize;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(oneway void)release;
@end
