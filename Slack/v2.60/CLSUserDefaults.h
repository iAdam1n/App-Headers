/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Slack/Slack-Structs.h>
@class NSURL, NSMutableDictionary, NSObject;

@interface CLSUserDefaults : NSObject {

	NSURL* _directoryURL;
	NSURL* _fileURL;
	NSMutableDictionary* _dataDictionary;
	NSObject*<OS_dispatch_queue> _serialDictionaryQueue;
	NSObject*<OS_dispatch_queue> _serialDiskQueue;

}

@property (nonatomic,copy,readonly) NSURL * directoryURL;                                       //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * dataDictionary;                       //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDictionaryQueue;              //@synthesize serialDictionaryQueue=_serialDictionaryQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDiskQueue;                    //@synthesize serialDiskQueue=_serialDiskQueue - In the implementation block
+(id)standardUserDefaults;
-(NSObject*<OS_dispatch_queue>)serialDictionaryQueue;
-(id)loadDictionaryFromDisk;
-(NSObject*<OS_dispatch_queue>)serialDiskQueue;
-(void)migrateFromNSUserDefaults:(id)arg1 ;
-(id)objectForKeyByMigratingFromNSUserDefaults:(id)arg1 ;
-(NSMutableDictionary *)dataDictionary;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSURL *)fileURL;
-(NSURL *)directoryURL;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
@end

