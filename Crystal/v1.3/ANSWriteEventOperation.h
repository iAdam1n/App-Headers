/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ANSMetadataSerializable;
@class ANSEvent, NSURL, NSString;

@interface ANSWriteEventOperation : NSOperation {

	BOOL _success;
	ANSEvent* _event;
	id<ANSMetadataSerializable> _metadata;
	NSURL* _logFileUrl;
	NSString* _formattedEvent;
	NSString* _formattedMetadata;

}

@property (nonatomic,retain) ANSEvent * event;                                    //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSURL * logFileUrl;                                  //@synthesize logFileUrl=_logFileUrl - In the implementation block
@property (assign,nonatomic) BOOL success;                                        //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSString * formattedEvent;                           //@synthesize formattedEvent=_formattedEvent - In the implementation block
@property (nonatomic,retain) NSString * formattedMetadata;                        //@synthesize formattedMetadata=_formattedMetadata - In the implementation block
@property (nonatomic,readonly) id<ANSMetadataSerializable> metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)generateFormattedLogLineWithEvent:(id)arg1 ;
-(void)setFormattedEvent:(NSString *)arg1 ;
-(id)generateFormattedLogLineWithMetdata:(id)arg1 timestamp:(id)arg2 ;
-(void)setLogFileUrl:(NSURL *)arg1 ;
-(NSURL *)logFileUrl;
-(BOOL)writeDataToDescriptor:(int)arg1 withPreexistingFile:(BOOL)arg2 ;
-(NSString *)formattedEvent;
-(BOOL)appendLogLine:(id)arg1 toFileDescriptor:(int)arg2 ;
-(id)logLineWithTimestamp:(id)arg1 eventName:(id)arg2 payloadDictionary:(id)arg3 ;
-(id)initWithEvent:(id)arg1 metadata:(id)arg2 logFileUrl:(id)arg3 ;
-(ANSEvent *)event;
-(void)setEvent:(ANSEvent *)arg1 ;
-(void)main;
-(id<ANSMetadataSerializable>)metadata;
-(NSString *)formattedMetadata;
-(void)setFormattedMetadata:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)success;
@end
