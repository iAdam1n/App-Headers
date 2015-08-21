/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNCircularProgressIndicator, MNLoadingIndicator;

@interface MNPullToRefreshView : UIView {

	MNCircularProgressIndicator* _circularIndicator;
	MNLoadingIndicator* _loadingIndicator;
	unsigned long long _state;
	double _pullProgress;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double pullProgress;                   //@synthesize pullProgress=_pullProgress - In the implementation block
-(void)setPullProgress:(double)arg1 ;
-(double)pullProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

