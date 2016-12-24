/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMLSession, NSArray, NSSet, FBMLSuggestionPhotosView;

@interface FBMLSuggestionPhotosController : NSObject {

	FBMLSession* _session;
	NSArray* _photos;
	NSSet* _userUUIDSetToFocus;
	FBMLSuggestionPhotosView* _photosView;

}

@property (nonatomic,copy) NSArray * photos;                                     //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) FBMLSuggestionPhotosView * photosView;              //@synthesize photosView=_photosView - In the implementation block
+(double)squareAspectHeightForWidth:(double)arg1 ;
-(id)initWithPhotos:(id)arg1 userUUIDSetToFocus:(id)arg2 momentsSession:(id)arg3 ;
-(void)setPhotosView:(FBMLSuggestionPhotosView *)arg1 ;
-(FBMLSuggestionPhotosView *)photosView;
-(void)setPhotos:(id)arg1 animated:(BOOL)arg2 ;
-(void)_configure;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
@end
