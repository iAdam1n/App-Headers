/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKRefreshControl.h>

@class UIView, _MKPanoramaRefreshView;

@interface MKPanoramaRefreshControl : MKRefreshControl {

	BOOL _offline;
	UIView* _backgroundOverlay;
	_MKPanoramaRefreshView* _panoramaView;

}

@property (nonatomic,retain) UIView * backgroundOverlay;                         //@synthesize backgroundOverlay=_backgroundOverlay - In the implementation block
@property (nonatomic,retain) _MKPanoramaRefreshView * panoramaView;              //@synthesize panoramaView=_panoramaView - In the implementation block
@property (assign,getter=isOffline,nonatomic) BOOL offline;                      //@synthesize offline=_offline - In the implementation block
-(void)mk_commonInit;
-(void)setBackgroundOverlay:(UIView *)arg1 ;
-(UIView *)backgroundOverlay;
-(BOOL)isOffline;
-(void)setOffline:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)setPanoramaView:(_MKPanoramaRefreshView *)arg1 ;
-(_MKPanoramaRefreshView *)panoramaView;
@end
