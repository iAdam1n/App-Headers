/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGFeedHeaderItem.h>

@class IGLocation, IGUser, IGSponsoredPostInfo, IGDate, CLLocation, NSString, IGUsertagGroup, IGFeedItem;

@interface IGEditedPost : NSObject <IGFeedHeaderItem> {

	IGLocation* _location;
	NSString* _caption;
	IGUsertagGroup* _usertags;
	IGFeedItem* _feedItem;

}

@property (retain) IGLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (retain) NSString * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (retain) IGUsertagGroup * usertags;                              //@synthesize usertags=_usertags - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) IGUser * user; 
@property (readonly) IGSponsoredPostInfo * sponsoredPostInfo; 
@property (readonly) IGDate * takenAt; 
@property (readonly) CLLocation * mediaCoord; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(id)pk;
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(IGDate *)takenAt;
-(CLLocation *)mediaCoord;
-(id)initWithFeedItem:(id)arg1 ;
-(BOOL)hasChangedCaption;
-(BOOL)hasChangedLocation;
-(BOOL)hasChangedUsertags;
-(BOOL)hasChanged;
-(IGLocation *)location;
-(IGUser *)user;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(NSString *)caption;
-(id)requestParameters;
@end
