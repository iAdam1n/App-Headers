/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailWebsiteLinkTableViewCell.h>

@class OASSessionContext;

@interface OAAppDetailPrivacyPolicyLinkTableViewCell : OAAppDetailWebsiteLinkTableViewCell {

	OASSessionContext* _sessionContext;

}

@property (nonatomic,retain) OASSessionContext * sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
-(OASSessionContext *)sessionContext;
-(void)setSessionContext:(OASSessionContext *)arg1 ;
-(void)cellWasTapped:(id)arg1 ;
-(void)awakeFromNib;
@end
