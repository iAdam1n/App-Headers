/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SPNetworkOperation.h>

@class SPCredentials, NSString;

@interface SPCallbackSendingOperation : SPNetworkOperation {

	BOOL _answerAlreadyReceived;
	SPCredentials* _credentials;
	NSString* _actionId;

}

@property (nonatomic,retain) SPCredentials * credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,copy) NSString * actionId;                        //@synthesize actionId=_actionId - In the implementation block
@property (assign) BOOL answerAlreadyReceived;                         //@synthesize answerAlreadyReceived=_answerAlreadyReceived - In the implementation block
+(id)callbackURLWithCredentials:(id)arg1 actionId:(id)arg2 answerReceived:(BOOL)arg3 ;
+(id)operationForCredentials:(id)arg1 actionId:(id)arg2 answerReceived:(BOOL)arg3 ;
-(void)setCredentials:(SPCredentials *)arg1 ;
-(void)setActionId:(NSString *)arg1 ;
-(void)setAnswerAlreadyReceived:(BOOL)arg1 ;
-(NSString *)actionId;
-(BOOL)answerAlreadyReceived;
-(id)initWithCredentials:(id)arg1 actionId:(id)arg2 answerReceived:(BOOL)arg3 ;
-(id)description;
-(SPCredentials *)credentials;
@end
