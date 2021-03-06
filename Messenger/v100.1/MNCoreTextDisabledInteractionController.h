/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCoreTextInteractionControlling.h>

@protocol UITextInput;
@class NSString;

@interface MNCoreTextDisabledInteractionController : NSObject <MNCoreTextInteractionControlling> {

	id<UITextInput> textInput;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UITextInput> textInput; 
-(void)detachIfNeededForTextInput:(id)arg1 ;
-(BOOL)controlsGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)clearSelection;
-(void)selectionDidChange;
-(id<UITextInput>)textInput;
-(void)setTextInput:(id<UITextInput>)arg1 ;
@end

