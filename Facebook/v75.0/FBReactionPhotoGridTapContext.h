/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPhoto;

@interface FBReactionPhotoGridTapContext : NSObject {

	FBMemPhoto* _photo;
	unsigned long long _index;

}

@property (nonatomic,retain) FBMemPhoto * photo;                    //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
@end
