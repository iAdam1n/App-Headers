/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPhotoModel.h>

@class NSAttributedString, NSString, NSMutableDictionary;

@interface FBMutablePhotoModel : FBPhotoModel {

	NSAttributedString* _albumName;
	BOOL _albumIsManuallyCreated;
	long long _albumPhotoCount;
	NSString* _fbid;
	NSMutableDictionary* _imageModels;
	BOOL _viewerCanDelete;

}

@property (nonatomic,retain) NSString * fbid;                           //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,copy) NSAttributedString * albumName;              //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL albumIsManuallyCreated;               //@synthesize albumIsManuallyCreated=_albumIsManuallyCreated - In the implementation block
@property (assign,nonatomic) long long albumPhotoCount;                 //@synthesize albumPhotoCount=_albumPhotoCount - In the implementation block
@property (assign,nonatomic) BOOL viewerCanDelete;                      //@synthesize viewerCanDelete=_viewerCanDelete - In the implementation block
-(NSString *)fbid;
-(id)imageSourceForFlag:(unsigned long long)arg1 ;
-(CGSize)imageSizeForFlag:(unsigned long long)arg1 ;
-(void)setFbid:(NSString *)arg1 ;
-(void)setImageSource:(id)arg1 forFlag:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forFlag:(unsigned long long)arg2 ;
-(void)setImageSize:(CGSize)arg1 forFlag:(unsigned long long)arg2 ;
-(void)setAlbumIsManuallyCreated:(BOOL)arg1 ;
-(void)setAlbumPhotoCount:(long long)arg1 ;
-(void)setViewerCanDelete:(BOOL)arg1 ;
-(BOOL)albumIsManuallyCreated;
-(long long)albumPhotoCount;
-(unsigned long long)bestImageFlag;
-(unsigned long long)worstImageFlag;
-(id)imageWithFlag:(unsigned long long)arg1 ;
-(BOOL)viewerCanDelete;
-(id)init;
-(void)setAlbumName:(NSAttributedString *)arg1 ;
-(NSAttributedString *)albumName;
@end

