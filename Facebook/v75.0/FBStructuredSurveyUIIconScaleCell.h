/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBStructuredSurveyUICell.h>

@protocol FBStructuredSurveyUIIconScaleCellDelegate;
@class NSMutableArray, FBUserSession;

@interface FBStructuredSurveyUIIconScaleCell : FBStructuredSurveyUICell {

	NSMutableArray* _iconViews;
	NSMutableArray* _iconButtons;
	id<FBStructuredSurveyUIIconScaleCellDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBStructuredSurveyUIIconScaleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
+(double)heightForModelObject:(id)arg1 context:(id)arg2 frame:(CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5 ;
-(void)configureWithModelObject:(id)arg1 context:(id)arg2 ;
-(void)touched:(id)arg1 ;
-(void)cancelled:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBStructuredSurveyUIIconScaleCellDelegate>)arg1 ;
-(id<FBStructuredSurveyUIIconScaleCellDelegate>)delegate;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
-(void)tapped:(id)arg1 ;
@end
