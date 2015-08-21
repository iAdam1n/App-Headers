/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString, UILabel, UIImageView;

@interface T1PlacePickerTableViewCell : TFNTableViewCell <UIAccessibilityIdentification> {

	BOOL _currentlySelected;
	NSString* _accessibilityIdentifier;
	UILabel* _placeNameLabel;
	UILabel* _placeAddressLabel;
	UILabel* _placeDistanceLabel;
	UILabel* _placeDistanceDotSeperatorLabel;
	UIImageView* _selectedImageView;

}

@property (nonatomic,copy) NSString * placeName; 
@property (nonatomic,copy) NSString * placeAddress; 
@property (nonatomic,copy) NSString * placeDistance; 
@property (assign,getter=isCurrentlySelected,nonatomic) BOOL currentlySelected;              //@synthesize currentlySelected=_currentlySelected - In the implementation block
@property (nonatomic,retain) UILabel * placeNameLabel;                                       //@synthesize placeNameLabel=_placeNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * placeAddressLabel;                                    //@synthesize placeAddressLabel=_placeAddressLabel - In the implementation block
@property (nonatomic,retain) UILabel * placeDistanceLabel;                                   //@synthesize placeDistanceLabel=_placeDistanceLabel - In the implementation block
@property (nonatomic,retain) UILabel * placeDistanceDotSeperatorLabel;                       //@synthesize placeDistanceDotSeperatorLabel=_placeDistanceDotSeperatorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * selectedImageView;                                //@synthesize selectedImageView=_selectedImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * accessibilityIdentifier;                               //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
+(double)_placeholderHeightForPlace;
+(double)heightWithPlaceName:(id)arg1 placeAddress:(id)arg2 placeDistance:(id)arg3 layoutMetrics:(id)arg4 ;
+(double)heightWithPlaceName:(id)arg1 placeAddress:(id)arg2 placeDistance:(id)arg3 contentPadding:(UIEdgeInsets)arg4 ;
-(void)setPlaceName:(NSString *)arg1 ;
-(void)setPlaceAddress:(NSString *)arg1 ;
-(void)setPlaceDistance:(NSString *)arg1 ;
-(void)setCurrentlySelected:(BOOL)arg1 ;
-(BOOL)isCurrentlySelected;
-(UIImageView *)selectedImageView;
-(UILabel *)placeAddressLabel;
-(UILabel *)placeDistanceLabel;
-(UILabel *)placeNameLabel;
-(UILabel *)placeDistanceDotSeperatorLabel;
-(void)_updateAccessibilityLabel;
-(NSString *)placeAddress;
-(NSString *)placeDistance;
-(void)setPlaceNameLabel:(UILabel *)arg1 ;
-(void)setPlaceAddressLabel:(UILabel *)arg1 ;
-(void)setPlaceDistanceLabel:(UILabel *)arg1 ;
-(void)setPlaceDistanceDotSeperatorLabel:(UILabel *)arg1 ;
-(void)setSelectedImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)accessibilityIdentifier;
-(void)prepareForReuse;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)placeName;
@end

