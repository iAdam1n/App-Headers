/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIView;

@interface FBIntentSource : NSObject {

	SCD_Union_FB901 _location;
	unsigned long long _type;
	UIView* _view;

}

@property (nonatomic,__weak,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)sourceForRect:(CGRect)arg1 inView:(id)arg2 ;
+(id)sourceForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(CGRect)rectInView:(id)arg1 ;
-(CGPoint)pointInView:(id)arg1 ;
-(UIView *)view;
@end
