/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString;


@protocol TFNTwitterDummyObject <NSObject>
@property (assign,nonatomic) long long dummyObjectType; 
@property (nonatomic,copy) NSString * messageText; 
@property (nonatomic,copy) NSString * messageSubtext; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (nonatomic,copy) id actionBlock; 
@required
-(void)setMessageText:(id)arg1;
-(void)setMessageSubtext:(id)arg1;
-(NSString *)messageSubtext;
-(long long)dummyObjectType;
-(void)setDummyObjectType:(long long)arg1;
-(BOOL)isLoading;
-(NSString *)messageText;
-(void)setLoading:(BOOL)arg1;
-(id)actionBlock;
-(void)setActionBlock:(/*^block*/id)arg1;

@end
