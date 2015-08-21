/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@protocol MNTokenFieldDelegate;
@class NSObject;

@interface MNTokenField : UITextField {

	NSObject*<MNTokenFieldDelegate> _touchDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<MNTokenFieldDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(NSObject*<MNTokenFieldDelegate>)touchDelegate;
-(void)setTouchDelegate:(NSObject*<MNTokenFieldDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
@end

