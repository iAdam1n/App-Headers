/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class IGCommentModel;

@interface IGFeedItemRowItem : NSObject {

	long long _type;
	IGCommentModel* _comment;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;              //@synthesize comment=_comment - In the implementation block
+(id)rowItemOfType:(long long)arg1 withComment:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setComment:(IGCommentModel *)arg1 ;
-(IGCommentModel *)comment;
@end
