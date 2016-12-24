/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBVideoHomeSubscribeNotificationsButton, FBMemModelObject, FBUserSession;

@interface FBVideoHomeSubscribeNotificationsButtonComponentView : UIView {

	FBVideoHomeSubscribeNotificationsButton* _button;
	BOOL _viewInvalidated;
	BOOL _darkBackground;
	BOOL _showVideoHomeTabItemBling;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	FBUserSession* _session;
	long long _buttonAlignment;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> videoChannel;              //@synthesize videoChannel=_videoChannel - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL darkBackground;                                                              //@synthesize darkBackground=_darkBackground - In the implementation block
@property (assign,nonatomic) long long buttonAlignment;                                                        //@synthesize buttonAlignment=_buttonAlignment - In the implementation block
@property (assign,nonatomic) BOOL showVideoHomeTabItemBling;                                                   //@synthesize showVideoHomeTabItemBling=_showVideoHomeTabItemBling - In the implementation block
@property (nonatomic,copy) id videoHomeSessionIDProvider;                                                      //@synthesize videoHomeSessionIDProvider=_videoHomeSessionIDProvider - In the implementation block
@property (nonatomic,copy) id stateToggledToBlock;                                                             //@synthesize stateToggledToBlock=_stateToggledToBlock - In the implementation block
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)videoChannel;
-(void)setVideoChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(void)setDarkBackground:(BOOL)arg1 ;
-(void)setButtonAlignment:(long long)arg1 ;
-(BOOL)darkBackground;
-(long long)buttonAlignment;
-(id)videoHomeSessionIDProvider;
-(void)setVideoHomeSessionIDProvider:(id)arg1 ;
-(id)stateToggledToBlock;
-(void)setStateToggledToBlock:(id)arg1 ;
-(void)setShowVideoHomeTabItemBling:(BOOL)arg1 ;
-(BOOL)showVideoHomeTabItemBling;
-(void)layoutSubviews;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
@end
