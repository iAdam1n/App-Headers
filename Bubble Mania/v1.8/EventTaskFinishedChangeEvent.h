/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@interface EventTaskFinishedChangeEvent : ChangeEvent {

	int _eventId;
	int _taskIndex;

}

@property (assign,nonatomic) int eventId;                //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) int taskIndex;              //@synthesize taskIndex=_taskIndex - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(id)csv;
-(int)taskIndex;
-(void)setTaskIndex:(int)arg1 ;
-(int)eventId;
-(void)setEventId:(int)arg1 ;
@end

