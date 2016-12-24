/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSArray, FBStringSelectorItem, UIBarButtonItem, NSString;

@interface FBScrollablePickerTextField : UITextField <UIPickerViewDelegate, UIPickerViewDataSource> {

	NSArray* _items;
	FBStringSelectorItem* _pickedItem;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,copy) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) FBStringSelectorItem * pickedItem;              //@synthesize pickedItem=_pickedItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                          //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBStringSelectorItem *)pickedItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
@end
