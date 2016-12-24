/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBSDKSharingContent.h>

@class NSURL, FBSDKHashtag, NSArray, NSString, FBSDKSharePhoto, FBSDKShareVideo;

@interface FBSDKShareVideoContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	FBSDKHashtag* _hashtag;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	FBSDKSharePhoto* _previewPhoto;
	FBSDKShareVideo* _video;

}

@property (nonatomic,copy) FBSDKSharePhoto * previewPhoto;              //@synthesize previewPhoto=_previewPhoto - In the implementation block
@property (nonatomic,copy) FBSDKShareVideo * video;                     //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                          //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) FBSDKHashtag * hashtag;                      //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                         //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                          //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                              //@synthesize ref=_ref - In the implementation block
+(BOOL)supportsSecureCoding;
-(FBSDKHashtag *)hashtag;
-(void)setHashtag:(FBSDKHashtag *)arg1 ;
-(BOOL)isEqualToShareVideoContent:(id)arg1 ;
-(FBSDKSharePhoto *)previewPhoto;
-(void)setPreviewPhoto:(FBSDKSharePhoto *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setVideo:(FBSDKShareVideo *)arg1 ;
-(FBSDKShareVideo *)video;
-(NSArray *)peopleIDs;
@end
