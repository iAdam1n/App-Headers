/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>
#import <Gumtree/ECValueViewProtocol.h>

@class NSDictionary, ECTextField, NSString;

@interface ECInlineTextFieldTableViewCell : ECBaseTableViewCell <ECValueViewProtocol> {

	BOOL _hasDoneToolbar;
	BOOL _isValueValid;
	ECTextField* _textField;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _beginEditingHandler;
	/*^block*/id _endEditingHandler;

}

@property (nonatomic,retain) ECTextField * textField;                      //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL hasDoneToolbar;                          //@synthesize hasDoneToolbar=_hasDoneToolbar - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                         //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (assign,nonatomic) BOOL isValueValid;                            //@synthesize isValueValid=_isValueValid - In the implementation block
@property (nonatomic,copy) id beginEditingHandler;                         //@synthesize beginEditingHandler=_beginEditingHandler - In the implementation block
@property (nonatomic,copy) id endEditingHandler;                           //@synthesize endEditingHandler=_endEditingHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * validTextStyle; 
@property (nonatomic,retain) NSDictionary * invalidTextStyle; 
-(void)setHasDoneToolbar:(BOOL)arg1 ;
-(void)textChangeNotification:(id)arg1 ;
-(void)textBeginEditingNotification:(id)arg1 ;
-(void)textEndEditingNotification:(id)arg1 ;
-(BOOL)hasDoneToolbar;
-(void)setBeginEditingHandler:(id)arg1 ;
-(void)setEndEditingHandler:(id)arg1 ;
-(void)setIsValueValid:(BOOL)arg1 ;
-(id)beginEditingHandler;
-(id)endEditingHandler;
-(BOOL)isValueValid;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setDefaults;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(ECTextField *)textField;
-(void)valueChanged:(id)arg1 ;
-(void)setTextField:(ECTextField *)arg1 ;
@end

