/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedMediaSetFieldsProtocol;
@class FBMemPhoto, NSArray, FBMemModelObject;

@interface FBProfilePhotoAndMediaSetModel : NSObject {

	FBMemPhoto* _photo;
	NSArray* _photos;
	FBMemModelObject*<FBQueriedMediaSetFieldsProtocol> _mediaSet;

}

@property (nonatomic,retain) FBMemPhoto * photo;                                                       //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                           //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedMediaSetFieldsProtocol> mediaSet;              //@synthesize mediaSet=_mediaSet - In the implementation block
-(id)initWithPhoto:(id)arg1 photos:(id)arg2 mediaSet:(id)arg3 ;
-(void)setMediaSet:(FBMemModelObject*<FBQueriedMediaSetFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedMediaSetFieldsProtocol>)mediaSet;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(FBMemPhoto *)photo;
@end

