/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/ALEObjectInterface.h>

@interface ALESms : ALEObjectInterface {

	BOOL ownSmsObj;
	SmsWrapper* smsWrapper;

}
-(id)initWithoutSkylibObject;
-(void)createSkylibObject;
-(void*)skylibObj;
-(int)CanTargetReply:(id)arg1 ;
-(BOOL)GetBodyChunks:(id*)arg1 andCharsuntilnextchunk:(unsigned*)arg2 ;
-(int)GetTargetCLIUsed:(id)arg1 ;
-(int)GetTargetErrorCategory:(id)arg1 ;
-(int)GetTargetHandsetDeliveryReport:(id)arg1 ;
-(unsigned)GetTargetPrice:(id)arg1 ;
-(id)GetTargetReplyNumber:(id)arg1 ;
-(int)GetTargetReplyType:(id)arg1 ;
-(int)GetTargetStatus:(id)arg1 ;
-(BOOL)Send;
-(void)SetConfirmationType:(int)arg1 ;
-(BOOL)SetOrigin:(id)arg1 ;
-(BOOL)SetReplyId:(unsigned long long)arg1 ;
-(BOOL)SetReplyTo:(id)arg1 ;
-(int)SetBody:(id)arg1 andChunks:(id*)arg2 andCharsuntilnextchunk:(unsigned*)arg3 ;
-(BOOL)SetTargets:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
