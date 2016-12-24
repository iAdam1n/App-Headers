/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@class FBRapidReportingToolbox, NSString, FBTextViewComponent;

@interface FBRapidReportingMessageComponent : CKCompositeComponent {

	FBRapidReportingToolbox* _toolbox;
	NSString* _targetID;
	NSString* _nodeID;
	FBTextViewComponent* _textViewComponent;

}

@property (nonatomic,readonly) FBTextViewComponent * textViewComponent;              //@synthesize textViewComponent=_textViewComponent - In the implementation block
+(id)newWithMessageAction:(id)arg1 toolbox:(id)arg2 ;
-(FBTextViewComponent *)textViewComponent;
-(void)cancelMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
@end
