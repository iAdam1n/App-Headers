/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStatus.h>
#import <Twitter/TFNTwitterDummyObject.h>

@class NSDate, NSString;

@interface TFNTwitterDummyStatus : TFNTwitterStatus <TFNTwitterDummyObject> {

	long long _statusID;
	NSDate* _date;
	BOOL _loading;
	long long _dummyObjectType;
	NSString* _messageText;
	NSString* _messageSubtext;
	/*^block*/id _actionBlock;

}

@property (assign,nonatomic) long long statusID; 
@property (nonatomic,retain) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long dummyObjectType;                  //@synthesize dummyObjectType=_dummyObjectType - In the implementation block
@property (nonatomic,copy) NSString * messageText;                       //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * messageSubtext;                    //@synthesize messageSubtext=_messageSubtext - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) id actionBlock;                               //@synthesize actionBlock=_actionBlock - In the implementation block
+(id)dummyStatusOfType:(long long)arg1 ;
-(long long)statusID;
-(id)fromUser;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setMessageSubtext:(NSString *)arg1 ;
-(id)statusIDNumber;
-(NSString *)messageSubtext;
-(BOOL)isNotADummyStatus;
-(void)setStatusID:(long long)arg1 ;
-(long long)dummyObjectType;
-(void)setFromUser:(id)arg1 ;
-(void)setDummyObjectType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)originalText;
-(BOOL)isLoading;
-(NSString *)messageText;
-(void)setOriginalText:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end

