//
//  UIView+RedBag.h
//  autoGetRedEnv
//
//  Created by 李向阳 on 2016/11/6.
//
//

#import <UIKit/UIKit.h>

@class WCDataItem;

@interface WCOperateFloatView : UIView
- (void)hide;
@end

@interface UIView (RedBag)
- (instancetype)xy_init;
@end

@interface WCUrl : NSObject <NSCoding>
@property(retain, nonatomic) NSString *url; // @synthesize url;
@end

@interface WCMediaItem : NSObject <NSCoding>
@property(retain, nonatomic) NSMutableArray<WCUrl*> *previewUrls; // @synthesize previewUrls;
@property(retain, nonatomic) WCUrl *dataUrl; // @synthesize dataUrl;
@end

@interface WCContentItem : NSObject <NSCoding>

@property(retain, nonatomic) NSMutableArray<WCMediaItem*> *mediaList; // @synthesize mediaList;
@property(nonatomic) int type; // @synthesize type; 1普通图文 15小视频

@end

@interface WCDataItem : NSObject <NSCoding>
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) WCContentItem *contentObj; // @synthesize contentObj;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@end
