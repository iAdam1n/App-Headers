/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@class FBTextViewComponent, NSString;

@interface FBPageComponentFlowTextViewComponent : CKCompositeComponent {

	FBTextViewComponent* _component;

}

@property (nonatomic,copy) NSString * text; 
+(id)newWithFieldName:(id)arg1 configuration:(const FBPageComponentFlowTextViewComponentConfiguration*)arg2 actions:(const FBPageComponentFlowTextViewComponentActions*)arg3 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
