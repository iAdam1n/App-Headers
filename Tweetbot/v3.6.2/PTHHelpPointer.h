/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PTHHelpPointerView;

@interface PTHHelpPointer : NSObject {

	PTHHelpPointerView* _view;
	BOOL _visible;
	/*^block*/id _completion;

}
+(BOOL)pointerVisible;
-(void)_hide:(BOOL)arg1 touched:(BOOL)arg2 ;
-(void)showMessage:(id)arg1 animated:(BOOL)arg2 inView:(id)arg3 pointToView:(id)arg4 direction:(int)arg5 completion:(/*^block*/id)arg6 ;
-(id)init;
-(void)touch:(id)arg1 ;
-(void)hide:(BOOL)arg1 ;
@end

