/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISwitch.h>

@interface RCTSwitch : UISwitch {

	BOOL _wasOn;
	/*^block*/id _onChange;

}

@property (assign,nonatomic) BOOL wasOn;              //@synthesize wasOn=_wasOn - In the implementation block
@property (nonatomic,copy) id onChange;               //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(BOOL)wasOn;
-(void)setWasOn:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
