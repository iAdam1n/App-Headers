/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAMediaDataPresentationController.h>

@class WAAutoCropImageView;

@interface WAMediaDataParallaxPresentationController : WAMediaDataPresentationController {

	WAAutoCropImageView* _currentImageView;
	WAAutoCropImageView* _transientImageView;
	double _parallaxScaleFactor;
	BOOL _needsParallax;

}
-(id)initWithChatCellData:(id)arg1 ;
-(void)transitionFromIndex:(unsigned long long)arg1 toCurrentIndexWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didScrollInWindowWithUserInteraction:(BOOL)arg1 ;
-(void)didUpdateImageAtIndex:(unsigned long long)arg1 completed:(BOOL)arg2 ;
-(id)currentImageView;
-(void)viewDidLayoutSubviews;
@end

