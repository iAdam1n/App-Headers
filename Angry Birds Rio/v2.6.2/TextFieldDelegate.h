/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface TextFieldDelegate : NSObject <UITextFieldDelegate> {

	UITextField* m_textView;
	TextInputObserver* m_observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setObserver:(TextInputObserver*)arg1 ;
-(void)setString:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getString;
-(void)setTextField:(id)arg1 ;
@end
