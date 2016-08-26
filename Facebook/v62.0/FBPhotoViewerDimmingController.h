/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTimer;

@interface FBPhotoViewerDimmingController : NSObject {

	/*^block*/id _dimmingBlock;
	FBTimer* _dimmingTimer;
	long long _dimmingDisablingCounter;
	long long _undimmingDisablingCounter;
	BOOL _didResumeTimer;
	BOOL _dimmed;
	BOOL _useOneOffDimmingTimer;

}

@property (assign,nonatomic) BOOL dimmed;                             //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL useOneOffDimmingTimer;              //@synthesize useOneOffDimmingTimer=_useOneOffDimmingTimer - In the implementation block
-(void)unDimPhotoViewer;
-(void)resumeDimmingTimer;
-(void)dimPhotoViewer;
-(void)pauseDimmingTimer;
-(void)disableDimming;
-(void)enableDimming;
-(BOOL)isDimmingEnabled;
-(BOOL)isUndimmingEnabled;
-(id)initWithTimerInterval:(long long)arg1 dimmingBlock:(/*^block*/id)arg2 ;
-(void)disableUndimming;
-(void)enableUndimming;
-(BOOL)useOneOffDimmingTimer;
-(void)setUseOneOffDimmingTimer:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
