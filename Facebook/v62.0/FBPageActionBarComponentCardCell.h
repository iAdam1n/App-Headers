/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>
#import <Facebook/FBPageActionBarCard.h>

@class FBActionBarWithProminentButtonView, NSString;

@interface FBPageActionBarComponentCardCell : FBMemPageCardCell <FBPageCardProtocol, FBPageActionBarCard> {

	FBActionBarWithProminentButtonView* _componentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActionBar:(id)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)initWithProminentButtonStyle:(unsigned long long)arg1 cardStyle:(long long)arg2 cardOption:(long long)arg3 ;
-(id)initWithProminentButtonStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)borderImage;
@end
