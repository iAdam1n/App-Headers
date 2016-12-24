/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FBRoundFaceModel : NSObject {

	NSURL* _faceURL;
	NSString* _name;

}

@property (nonatomic,retain) NSURL * faceURL;              //@synthesize faceURL=_faceURL - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
+(id)faceModelWithURL:(id)arg1 name:(id)arg2 ;
-(void)setFaceURL:(NSURL *)arg1 ;
-(NSURL *)faceURL;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
