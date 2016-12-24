/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBMLFolderFeedStoryHeaderConfig, FBMLFolderFeedStoryFooterConfig;

@interface FBMLFolderFeedStoryFragmentConfig : NSObject {

	BOOL _useRoundedCard;
	NSArray* _photos;
	NSArray* _photosPendingUpload;
	NSArray* _placeholderImages;
	FBMLFolderFeedStoryHeaderConfig* _headerConfig;
	FBMLFolderFeedStoryFooterConfig* _footerConfig;

}

@property (nonatomic,copy,readonly) NSArray * photos;                                       //@synthesize photos=_photos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photosPendingUpload;                          //@synthesize photosPendingUpload=_photosPendingUpload - In the implementation block
@property (nonatomic,copy,readonly) NSArray * placeholderImages;                            //@synthesize placeholderImages=_placeholderImages - In the implementation block
@property (nonatomic,readonly) BOOL useRoundedCard;                                         //@synthesize useRoundedCard=_useRoundedCard - In the implementation block
@property (nonatomic,readonly) FBMLFolderFeedStoryHeaderConfig * headerConfig;              //@synthesize headerConfig=_headerConfig - In the implementation block
@property (nonatomic,readonly) FBMLFolderFeedStoryFooterConfig * footerConfig;              //@synthesize footerConfig=_footerConfig - In the implementation block
-(NSArray *)photosPendingUpload;
-(NSArray *)placeholderImages;
-(id)initWithPhotos:(id)arg1 photosPendingUpload:(id)arg2 placeholderImages:(id)arg3 headerConfig:(id)arg4 footerConfig:(id)arg5 useRoundedCard:(BOOL)arg6 ;
-(BOOL)useRoundedCard;
-(FBMLFolderFeedStoryHeaderConfig *)headerConfig;
-(FBMLFolderFeedStoryFooterConfig *)footerConfig;
-(NSArray *)photos;
@end
