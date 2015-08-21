/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECValidatingTextFieldTableViewCell.h>

@class UISwitch;

@interface ECValidatingSwitchTextFieldTableViewCell : ECValidatingTextFieldTableViewCell {

	UISwitch* _optOutSwitch;
	/*^block*/id _valueChangedHandler;

}

@property (nonatomic,retain) UISwitch * optOutSwitch;              //@synthesize optOutSwitch=_optOutSwitch - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                 //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
-(UISwitch *)optOutSwitch;
-(void)setOptOutSwitch:(UISwitch *)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setDefaults;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)switchAction:(id)arg1 ;
@end

