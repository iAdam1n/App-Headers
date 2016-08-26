/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface FBWebRTCCallStatusBarView : UIView {

	UILabel* _statusLabel;
	NSString* _messageString;
	NSString* _statusString;

}

@property (nonatomic,copy) NSString * messageString;              //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,copy) NSString * statusString;               //@synthesize statusString=_statusString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setMessage:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(NSString *)messageString;
-(void)updateStatusLabel;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
@end
