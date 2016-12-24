/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMemPagePlacesAboutCardController.h>
#import <Facebook/FBLongTextExpandableViewDelegate.h>
#import <Facebook/FBMemPagePlacesAboutPageInfoCardCellDelegate.h>
#import <Facebook/FBLocationMapViewControllerDelegate.h>

@class FBMemPagePlacesAboutPageInfoCardCell, FBMemPageInfoSection, NSString;

@interface FBMemPagePlacesAboutPageInfoCardController : FBMemPagePlacesAboutCardController <FBLongTextExpandableViewDelegate, FBMemPagePlacesAboutPageInfoCardCellDelegate, FBLocationMapViewControllerDelegate> {

	FBMemPagePlacesAboutPageInfoCardCell* _cardCell;
	FBMemPageInfoSection* _pageInfoSection;

}

@property (nonatomic,retain) FBMemPageInfoSection * pageInfoSection;              //@synthesize pageInfoSection=_pageInfoSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cellHeightDidChange;
-(void)_displayDirectionToLocation:(CLLocationCoordinate2D)arg1 locationName:(id)arg2 ;
-(void)displayDirectionsToLocation:(CLLocationCoordinate2D)arg1 locationName:(id)arg2 ;
-(void)setPageInfoSection:(FBMemPageInfoSection *)arg1 ;
-(void)didTapLongTextViewAtIndex:(unsigned long long)arg1 ;
-(void)_openInMapView;
-(void)_launchAppleMapWithMapName:(id)arg1 coordinates:(CLLocationCoordinate2D)arg2 ;
-(void)_launchGoogleMapWithCoordinates:(CLLocationCoordinate2D)arg1 ;
-(void)_launchWazeMapWithCoordinates:(CLLocationCoordinate2D)arg1 ;
-(void)tappedURL:(id)arg1 ;
-(FBMemPageInfoSection *)pageInfoSection;
-(void)dealloc;
-(id)cardView;
@end
