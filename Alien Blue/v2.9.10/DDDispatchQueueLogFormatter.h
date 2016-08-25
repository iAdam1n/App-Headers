/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/DDLogFormatter.h>

@class NSString, NSDateFormatter, NSMutableDictionary;

@interface DDDispatchQueueLogFormatter : NSObject <DDLogFormatter> {

	NSString* dateFormatString;
	int atomicLoggerCount;
	NSDateFormatter* threadUnsafeDateFormatter;
	int lock;
	unsigned long long _minQueueLength;
	unsigned long long _maxQueueLength;
	NSMutableDictionary* _replacements;

}

@property (assign) unsigned long long minQueueLength;               //@synthesize minQueueLength=_minQueueLength - In the implementation block
@property (assign) unsigned long long maxQueueLength;               //@synthesize maxQueueLength=_maxQueueLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(void)didAddToLogger:(id)arg1 ;
-(void)willRemoveFromLogger:(id)arg1 ;
-(unsigned long long)minQueueLength;
-(unsigned long long)maxQueueLength;
-(id)queueThreadLabelForLogMessage:(id)arg1 ;
-(id)replacementStringForQueueLabel:(id)arg1 ;
-(void)setReplacementString:(id)arg1 forQueueLabel:(id)arg2 ;
-(void)setMinQueueLength:(unsigned long long)arg1 ;
-(void)setMaxQueueLength:(unsigned long long)arg1 ;
-(id)init;
-(id)stringFromDate:(id)arg1 ;
@end

